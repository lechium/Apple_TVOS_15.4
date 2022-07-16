//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface PKWebServiceRequest : NSObject <NSSecureCoding>
{
    NSMutableArray *_diagnosticReasonsList;	// 8 = 0x8
    NSString *_boundInterfaceIdentifier;	// 16 = 0x10
    unsigned long long _cachePolicyOverride;	// 24 = 0x18
    double _timeoutOverride;	// 32 = 0x20
}

+ (id)_HTTPBodyWithDictionary:(id)arg1;	// IMP=0x00000000000a5128
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4f2f
- (void).cxx_destruct;	// IMP=0x00000000000a5ad5
@property(nonatomic) double timeoutOverride; // @synthesize timeoutOverride=_timeoutOverride;
@property(nonatomic) unsigned long long cachePolicyOverride; // @synthesize cachePolicyOverride=_cachePolicyOverride;
@property(copy, nonatomic) NSString *boundInterfaceIdentifier; // @synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;	// IMP=0x00000000000a5551
- (id)_murlRequestWithURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x00000000000a53f6
- (id)_murlRequestWithURL:(id)arg1;	// IMP=0x00000000000a5260
@property(readonly, nonatomic) NSArray *diagnosticReasons;
- (void)addDiagnosticReason:(id)arg1;	// IMP=0x00000000000a51e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a5089
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4f37

@end
