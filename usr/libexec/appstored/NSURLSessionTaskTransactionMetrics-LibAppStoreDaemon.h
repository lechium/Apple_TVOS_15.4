//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLSessionTaskTransactionMetrics.h>

@class NSDateInterval;

@interface NSURLSessionTaskTransactionMetrics (LibAppStoreDaemon)
+ (id)_dateIntervalFrom:(id)arg1 to:(id)arg2;	// IMP=0x002000000019044a
@property(readonly, copy) NSDateInterval *lib_secureConnectionInterval;
@property(readonly, copy) NSDateInterval *lib_responseInterval;
@property(readonly, copy) NSDateInterval *lib_requestInterval;
@property(readonly, copy) NSDateInterval *lib_domainLookupInterval;
@property(readonly, copy) NSDateInterval *lib_connectInterval;
@end

