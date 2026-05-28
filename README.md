# ChemPath

> **ChemPath: Directed Weighted Graph Models for Algorithmic Organic Synthesis Route Prediction**

ChemPath is a computational chemistry and graph-theory research project that models organic reaction mechanisms as a **directed weighted graph**:

- **Nodes** → molecules
- **Edges** → reaction steps
- **Weights** → relative reaction-cost / activation-energy-inspired metrics

The project explores whether classical graph pathfinding algorithms can meaningfully navigate simplified organic synthesis spaces.

---

## Core Idea

ChemPath reframes retrosynthesis as a graph traversal problem:

```text
Chemistry → Directed Weighted Graph → Pathfinding Problem
```

Instead of manually searching synthesis routes, the system algorithmically evaluates possible pathways between molecules using shortest-path and heuristic-search algorithms.

---

## Algorithms

ChemPath currently explores and compares:

- **Dijkstra's Algorithm**
- **Bellman–Ford Algorithm**
- **A\* Search**

The A\* heuristic is planned to use:

- **Morgan fingerprints**
- **Tanimoto similarity**

to estimate structural proximity between molecules during traversal.

---

## Motivation

Retrosynthesis — determining how to synthesize a target molecule from available starting materials — is one of the most challenging problems in organic chemistry.

ChemPath investigates whether graph-theoretic optimization techniques from computer science can provide computationally useful representations of synthesis pathways.

---

## Architecture

```text
Reaction Dataset
        ↓
Directed Weighted Graph Construction
        ↓
Pathfinding Algorithms
(Dijkstra / Bellman-Ford / A*)
        ↓
Route Reconstruction
        ↓
MechLang Visualization
```

---

## Current Goals

- Build a scalable graph representation of reaction pathways
- Compare classical shortest-path algorithms on synthesis graphs
- Evaluate chemically informed heuristic search
- Explore computational representations of synthesis space

---

## Planned Experiment Sets

| Set | Description                                                |
|-----|------------------------------------------------------------|
| A   | Validation against known textbook synthesis routes         |
| B   | Route efficiency comparison using cumulative reaction cost |
| C   | Exploration of alternative graph pathways                  |

---

## Tech Stack

| Component          | Technology                     |
|--------------------|--------------------------------|
| Core Graph Engine  | C++                            |
| Cheminformatics    | Python + RDKit                 |
| Data Storage       | JSON / SQL                     |
| Similarity Metrics | Morgan Fingerprints + Tanimoto |
| Visualization      | MechLang                       |

---

## Development Roadmap

| Phase                   | Goal                                    |
|-------------------------|-----------------------------------------|
| Foundation              | Graph engine + reaction representation  |
| Search Algorithms       | Dijkstra + Bellman-Ford                 |
| Heuristic Search        | A\* implementation                      |
| Chemical Similarity     | Morgan fingerprints + Tanimoto          |
| Experimental Evaluation | Algorithm comparison + pathway analysis |
| Visualization           | MechLang integration                    |
| Research Paper          | Formal experimental writeup             |

---

## Research Context

ChemPath is being developed as an independent computational chemistry research project intended for submission to research competitions such as the **IRIS National Fair**, India's affiliated pathway to **Regeneron ISEF**.

---

## Status

🔨 Active development — Graph engine prototype phase

---

## License

[Apache 2.0](https://www.apache.org/licenses/LICENSE-2.0)
