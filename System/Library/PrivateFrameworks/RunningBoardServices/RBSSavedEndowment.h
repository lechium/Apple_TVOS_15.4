//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;
@protocol NSSecureCoding;

@interface RBSSavedEndowment : NSObject <NSCopying, RBSXPCSecureCoding>
{
    NSObject<NSSecureCoding> *_endowment;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x000000000002bb05
+ (id)savedEndowment:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000002b92f
- (void).cxx_destruct;	// IMP=0x000000000002bcf1
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *endowment; // @synthesize endowment=_endowment;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002bbb6
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000002bb0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002bafa
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b99f
- (id)_initWithEndowment:(id)arg1 andKey:(id)arg2;	// IMP=0x000000000002b896

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

