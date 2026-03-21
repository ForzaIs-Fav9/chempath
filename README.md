# ChemPath

> **ChemPath: Directed Weighted Graph Models of Organic Reaction Mechanisms Enable Algorithmic Synthesis Route Prediction via Modified A\* Search**

ChemPath models organic reaction mechanisms as a directed weighted graph where:
- **Nodes** = molecules
- **Edges** = reaction steps  
- **Weights** = ΔG‡ (activation energy, sourced from NIST WebBook)

Three pathfinding algorithms (Dijkstra, A*, Bellman-Ford) are compared for synthesis route prediction. The novel A* heuristic uses the **Tanimoto coefficient on Morgan fingerprints** to estimate molecular similarity as a proxy for reaction feasibility.

## Motivation

Retrosynthesis — working backward from a target molecule to available starting materials — is one of chemistry's hardest problems. ChemPath frames it as a graph traversal problem, making it tractable for computational approaches, especially in resource-limited research labs.

## Architecture
```
Molecule DB → Graph Engine (C++) → Algorithm Layer → Route Output → MechLang SVG
```

## Experiment Sets

| Set | Description |
|-----|-------------|
| A | Known route validation vs. Clayden's Organic Chemistry |
| B | Route efficiency comparison by total ΔG‡ |
| C | Novel route discovery |

## Tech Stack

- **Engine:** C++
- **Reaction DB:** JSON (~90 reactions, 12 families)
- **Fingerprinting:** RDKit (Morgan fingerprints + Tanimoto)
- **Visualization:** [MechLang](https://github.com/ForzaIs-Fav9/mechlang)

## Timeline

| Phase | Period | Goal |
|-------|--------|------|
| Foundation | Mar–Apr 2026 | Graph engine + reaction DB |
| A* Heuristic | May–Jun 2026 | Tanimoto integration |
| Experiments | Jul–Aug 2026 | Run all 3 experiment sets |
| Analysis | Sep–Oct 2026 | Statistical analysis |
| Paper | Nov 2026 | Final ISEF submission |

## Status

🔨 Active development — Foundation phase (March 2026)

## License

Apache 2.0

---
