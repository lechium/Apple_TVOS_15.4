//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICURLPerformanceMetrics : NSObject
{
    _Bool _cachedResponse;	// 8 = 0x8
    _Bool _connectionReused;	// 9 = 0x9
    double _connectionStartTime;	// 16 = 0x10
    double _connectionEndTime;	// 24 = 0x18
    double _domainLookupStartTime;	// 32 = 0x20
    double _domainLookupEndTime;	// 40 = 0x28
    double _fetchStartTime;	// 48 = 0x30
    double _requestStartTime;	// 56 = 0x38
    double _responseStartTime;	// 64 = 0x40
    double _responseEndTime;	// 72 = 0x48
    double _secureConnectionStartTime;	// 80 = 0x50
    NSString *_appleTimingApp;	// 88 = 0x58
    NSString *_connectionType;	// 96 = 0x60
    NSString *_edgeNodeCacheStatus;	// 104 = 0x68
    NSString *_environmentDataCenter;	// 112 = 0x70
    NSString *_responseDate;	// 120 = 0x78
    unsigned long long _statusCode;	// 128 = 0x80
    unsigned long long _redirectCount;	// 136 = 0x88
    unsigned long long _requestMessageSize;	// 144 = 0x90
    NSString *_requestUrl;	// 152 = 0x98
    NSString *_resolvedIPAddress;	// 160 = 0xa0
    unsigned long long _responseMessageSize;	// 168 = 0xa8
}

+ (double)networkingTimeFromMetrics:(id)arg1;	// IMP=0x000000000003a0d8
- (void).cxx_destruct;	// IMP=0x000000000003a073
@property(readonly, nonatomic) unsigned long long responseMessageSize; // @synthesize responseMessageSize=_responseMessageSize;
@property(readonly, nonatomic) NSString *resolvedIPAddress; // @synthesize resolvedIPAddress=_resolvedIPAddress;
@property(readonly, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(readonly, nonatomic) unsigned long long requestMessageSize; // @synthesize requestMessageSize=_requestMessageSize;
@property(readonly, nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(readonly, nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSString *responseDate; // @synthesize responseDate=_responseDate;
@property(readonly, nonatomic) NSString *environmentDataCenter; // @synthesize environmentDataCenter=_environmentDataCenter;
@property(readonly, nonatomic) NSString *edgeNodeCacheStatus; // @synthesize edgeNodeCacheStatus=_edgeNodeCacheStatus;
@property(readonly, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSString *appleTimingApp; // @synthesize appleTimingApp=_appleTimingApp;
@property(readonly, nonatomic) _Bool connectionReused; // @synthesize connectionReused=_connectionReused;
@property(readonly, nonatomic) _Bool cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property(readonly, nonatomic) double secureConnectionStartTime; // @synthesize secureConnectionStartTime=_secureConnectionStartTime;
@property(readonly, nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(readonly, nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(readonly, nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) double fetchStartTime; // @synthesize fetchStartTime=_fetchStartTime;
@property(readonly, nonatomic) double domainLookupEndTime; // @synthesize domainLookupEndTime=_domainLookupEndTime;
@property(readonly, nonatomic) double domainLookupStartTime; // @synthesize domainLookupStartTime=_domainLookupStartTime;
@property(readonly, nonatomic) double connectionEndTime; // @synthesize connectionEndTime=_connectionEndTime;
@property(readonly, nonatomic) double connectionStartTime; // @synthesize connectionStartTime=_connectionStartTime;
- (id)initWithTransactionMetrics:(id)arg1 request:(id)arg2;	// IMP=0x00000000000399e8

@end

