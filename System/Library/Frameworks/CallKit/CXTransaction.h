//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, NSUUID;

@interface CXTransaction : NSObject <CXCopying, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSMutableOrderedSet *_mutableActions;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f158
- (void).cxx_destruct;	// IMP=0x000000000000f58f
@property(retain, nonatomic) NSMutableOrderedSet *mutableActions; // @synthesize mutableActions=_mutableActions;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f475
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f357
- (id)allowedClassesForMutableActions;	// IMP=0x000000000000f160
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f0fc
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000000ef1d
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000eebd
- (id)sanitizedCopy;	// IMP=0x000000000000eea9
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000000ec8a
- (void)addActionsFromTransaction:(id)arg1;	// IMP=0x000000000000eb4d
- (void)addAction:(id)arg1;	// IMP=0x000000000000eadb
@property(readonly, copy, nonatomic) NSArray *actions;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000e852
- (id)initWithAction:(id)arg1;	// IMP=0x000000000000e7a2
- (id)initWithActions:(id)arg1;	// IMP=0x000000000000e6ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

