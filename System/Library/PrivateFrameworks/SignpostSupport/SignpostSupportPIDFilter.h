//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSPredicate, NSSet;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>
{
    _Bool __wantsNotEqual;	// 8 = 0x8
    NSSet *_pidSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000007338
@property(readonly, nonatomic) _Bool _wantsNotEqual; // @synthesize _wantsNotEqual=__wantsNotEqual;
@property(readonly, nonatomic) NSSet *pidSet; // @synthesize pidSet=_pidSet;
- (void)addPIDNumberSet:(id)arg1;	// IMP=0x00000000000072b3
- (void)addPIDNumber:(id)arg1;	// IMP=0x0000000000007241
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
- (_Bool)_wantsNotSubsystem;	// IMP=0x0000000000006fad
- (_Bool)passesPIDNumber:(id)arg1;	// IMP=0x0000000000006fa5
- (id)init;	// IMP=0x0000000000006f3f

@end

