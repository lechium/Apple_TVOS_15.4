//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, __CFN_ConnectionMetrics;
@protocol OS_nw_endpoint, OS_nw_establishment_report;

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding>
{
    __CFN_ConnectionMetrics *__metrics;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002529bd
- (void).cxx_destruct;	// IMP=0x00000000002529ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000025298a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002528ca
@property(readonly, retain, nonatomic) NSObject<OS_nw_establishment_report> *establishmentReport;
@property(readonly, copy, nonatomic) NSNumber *negotiatedTLSCipherSuite;
@property(readonly, copy, nonatomic) NSNumber *negotiatedTLSProtocolVersion;
@property(readonly, copy, nonatomic) NSString *networkProtocolName;
@property(readonly, nonatomic) _Bool usedTFO;
@property(readonly, nonatomic, getter=isMultipath) _Bool multipath;
@property(readonly, nonatomic, getter=isConstrained) _Bool constrained;
@property(readonly, nonatomic, getter=isExpensive) _Bool expensive;
@property(readonly, nonatomic, getter=isCellular) _Bool cellular;
@property(readonly, copy, nonatomic) NSString *interfaceName;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;

@end
