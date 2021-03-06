//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeyDerivingOperation-Protocol.h>

@class NSString;

@interface _SFECDHOperation : NSObject <SFKeyDerivingOperation>
{
    id _ecdhOperationInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ff73
+ (id)_defaultOperation;	// IMP=0x000000000000ff28
+ (long long)_defaultMode;	// IMP=0x000000000000ff20
+ (long long)keySource;	// IMP=0x000000000000ff15
- (void).cxx_destruct;	// IMP=0x00000000000102d2
@property(nonatomic) long long mode;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010082
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001004e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010048
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010019
- (id)initWithMode:(long long)arg1;	// IMP=0x000000000000ffb4
- (id)init;	// IMP=0x000000000000ff7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

