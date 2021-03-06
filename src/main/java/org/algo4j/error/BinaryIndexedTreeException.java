package org.algo4j.error;

import org.jetbrains.annotations.Contract;
import org.jetbrains.annotations.Nls;
import org.jetbrains.annotations.NotNull;

/**
 * Created by ice1000 on 2016/11/17.
 *
 * @author ice1000
 */
@SuppressWarnings("unused")
public class BinaryIndexedTreeException extends RuntimeException {
	public BinaryIndexedTreeException() {
		this("Binary indexed tree error!");
	}

	public BinaryIndexedTreeException(@NotNull @Nls String message) {
		super(message);
	}

	@NotNull
	@Contract("_ -> !null")
	public static BinaryIndexedTreeException indexOutBound(int index) {
		return new BinaryIndexedTreeException("Index " + index + " out of bound!");
	}

	@NotNull
	@Contract(" -> !null")
	public static BinaryIndexedTreeException indexOutBound() {
		return new BinaryIndexedTreeException("Index out of bound!");
	}
}
