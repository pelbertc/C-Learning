.PHONY: clean All

All:
	@echo "----------Building project:[ Chapter2 - Debug ]----------"
	@cd "Chapter2" && "$(MAKE)" -f  "Chapter2.mk"
clean:
	@echo "----------Cleaning project:[ Chapter2 - Debug ]----------"
	@cd "Chapter2" && "$(MAKE)" -f  "Chapter2.mk" clean
