/*
 * EHttpCodecFilter.hh
 *
 *  Created on: 2017-4-7
 *      Author: cxxjava@163.com
 */

#ifndef EHTTPCODECFILTER_HH_
#define EHTTPCODECFILTER_HH_

#include "../../inc/EIoFilterAdapter.hh"
#include "../../inc/EIoBuffer.hh"

namespace efc {
namespace naf {

class EHttpCodecFilter: public EIoFilterAdapter {
public:
	static const int MAX_HTTP_SIZE = 4096;

public:
	/**
	 * {@inheritDoc}
	 */
	virtual boolean sessionCreated(EIoFilter::NextFilter* nextFilter, EIoSession* session) THROWS(EException);

	/**
	 * {@inheritDoc}
	 */
	virtual void sessionClosed(EIoFilter::NextFilter* nextFilter, EIoSession* session) THROWS(EException);

	/**
	 * {@inheritDoc}
	 */
	virtual sp<EObject> messageReceived(EIoFilter::NextFilter* nextFilter, EIoSession* session, sp<EObject> message) THROWS(EException);

	/**
	 * {@inheritDoc}
	 */
	virtual sp<EObject> messageSend(EIoFilter::NextFilter* nextFilter, EIoSession* session, sp<EObject> message) THROWS(EException);

	/**
	 *
	 */
	virtual EStringBase toString();
};

} /* namespace naf */
} /* namespace efc */
#endif /* EHTTPCODECFILTER_HH_ */
