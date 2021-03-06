//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSSet;

@interface DNDSExplicitRegionStore : NSObject <NSCopying, NSMutableCopying>
{
    NSSet *_enteredRegionIdentifiersPendingExit;	// 8 = 0x8
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x000000000001dc50
- (void).cxx_destruct;	// IMP=0x000000000001ddcc
@property(readonly, copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit; // @synthesize enteredRegionIdentifiersPendingExit=_enteredRegionIdentifiersPendingExit;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x000000000001dd48
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001dc22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001dc17
- (id)description;	// IMP=0x000000000001db8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001da58
- (unsigned long long)hash;	// IMP=0x000000000001da14
- (id)_initWithEnteredRegionIdentifiersPendingExit:(id)arg1;	// IMP=0x000000000001d9a9
- (id)_initWithStore:(id)arg1;	// IMP=0x000000000001d8c0
- (id)init;	// IMP=0x000000000001d8ac

@end

