void main()
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(9))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(9);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(9);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

