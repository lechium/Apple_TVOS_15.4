//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface NSMutableURLRequest
{
}

- (void)_removeAllProtocolProperties;	// IMP=0x00000000001cd5f9
- (void)_setPrivacyProxyFailClosed:(_Bool)arg1;	// IMP=0x00000000001cd5d7
- (void)set_trackerContext:(id)arg1;	// IMP=0x00000000001cd590
- (void)_setNonAppInitiated:(_Bool)arg1;	// IMP=0x00000000001cd56b
- (void)_setNeedsNetworkTrackingPrevention:(_Bool)arg1;	// IMP=0x00000000001cd559
- (void)_setKnownTracker:(_Bool)arg1;	// IMP=0x00000000001cd537
- (void)setBoundInterfaceIdentifier:(id)arg1;	// IMP=0x00000000001cd510
@property _Bool allowsCellularAccess; // @dynamic allowsCellularAccess;
@property unsigned long long networkServiceType; // @dynamic networkServiceType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cd48e
@property unsigned long long attribution; // @dynamic attribution;
@property _Bool assumesHTTP3Capable; // @dynamic assumesHTTP3Capable;
@property _Bool allowsExpensiveNetworkAccess; // @dynamic allowsExpensiveNetworkAccess;
@property _Bool allowsConstrainedNetworkAccess; // @dynamic allowsConstrainedNetworkAccess;
@property(copy) NSURL *mainDocumentURL; // @dynamic mainDocumentURL;
@property double timeoutInterval; // @dynamic timeoutInterval;
@property unsigned long long cachePolicy; // @dynamic cachePolicy;
@property(copy) NSURL *URL; // @dynamic URL;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;	// IMP=0x00000000001ce175
- (void)_setPayloadTransmissionTimeout:(double)arg1;	// IMP=0x00000000001ce148
- (void)_setIgnoreHSTS:(_Bool)arg1;	// IMP=0x00000000001ce126
- (void)_setPreventHSTSStorage:(_Bool)arg1;	// IMP=0x00000000001ce104
- (void)_setRequiresShortConnectionTimeout:(_Bool)arg1;	// IMP=0x00000000001ce0e2
- (void)_setStartTimeoutDate:(id)arg1;	// IMP=0x00000000001ce0a1
- (void)_setTimeWindowDuration:(double)arg1;	// IMP=0x00000000001ce074
- (void)_setTimeWindowDelay:(double)arg1;	// IMP=0x00000000001ce047
- (void)setExpectedWorkload:(unsigned long long)arg1;	// IMP=0x00000000001ce023
@property _Bool HTTPShouldUsePipelining;
- (unsigned long long)requestPriority;	// IMP=0x00000000001cdffb
- (void)setRequestPriority:(unsigned long long)arg1;	// IMP=0x00000000001cdfda
@property _Bool HTTPShouldHandleCookies;
- (void)setHTTPUserAgent:(id)arg1;	// IMP=0x00000000001cdf7e
- (void)setHTTPReferrer:(id)arg1;	// IMP=0x00000000001cdefa
- (void)setHTTPExtraCookies:(id)arg1;	// IMP=0x00000000001cddf6
- (void)setHTTPContentType:(id)arg1;	// IMP=0x00000000001cdddd
@property(retain) NSInputStream *HTTPBodyStream;
@property(copy) NSData *HTTPBody;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x00000000001cddb6
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x00000000001cdda9
@property(copy) NSDictionary *allHTTPHeaderFields;
@property(copy) NSString *HTTPMethod;

@end

