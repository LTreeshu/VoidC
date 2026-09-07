# NihaoC 项目进度与 TODO

> 本文件为索引，详细内容见 docs/ 目录。

- [项目路线图与通用待办](docs/ROADMAP.md) — 里程碑、架构概览、P0-P2 通用待办、推荐下一步
- [PA 方案待办](docs/TODO-PA.md) — 1.0 冻结线维护项（PA 分支）
- [PB 方案待办](docs/TODO-PB.md) — 2.0 IR 中间层演进项（PB 分支）

---

## 跨分支同步规则

| 场景 | 操作 | 需同步 |
|------|------|--------|
| PB 新增/完成 PB-* 项 | 只改 `docs/TODO-PB.md` | 否（PB 独有） |
| PA 新增/完成 PA-* 项 | 只改 `docs/TODO-PA.md` | PA→main |
| 里程碑完成 / 架构决策变更 | 改 `docs/ROADMAP.md` | 三分支 |
| 索引结构调整 | 改 `TODO.md`（本文件） | 三分支 |

> PB-* 项是 PB 分支独有内容，main/PA 不含 `docs/TODO-PB.md`，无需同步。
