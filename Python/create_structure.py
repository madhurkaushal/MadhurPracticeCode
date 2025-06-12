import os

structure = {
    "project": [
        "src/document_processing/pdf_processor.py",
        "src/document_processing/docx_processor.py",
        "src/document_processing/base_processor.py",
        "src/vectorstore/chroma_client.py",
        "src/vectorstore/embeddings.py",
        "src/vectorstore/vector_operations.py",
        "src/retrieval/retriever.py",
        "src/retrieval/reranker.py",
        "src/retrieval/hybrid_search.py",
        "src/llm/ollama_client.py",
        "src/llm/prompt_templates.py",
        "src/llm/response_handler.py",
        "src/api/routes.py",
        "src/api/models.py",
        "src/api/middleware.py",
        "src/config/settings.py",
        "src/config/logging.py",
        "frontend/.gitkeep",
        "docker/.gitkeep",
        "tests/.gitkeep",
        "requirements.txt"
    ]
}

for root, files in structure.items():
    for file_path in files:
        full_path = os.path.join(root, file_path)
        os.makedirs(os.path.dirname(full_path), exist_ok=True)
        with open(full_path, 'w') as f:
            pass  # Create empty file

print("✅ Project structure created.")
