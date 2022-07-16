//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class MPMediaPredicate, NSString;

@interface MPMediaConditionalPredicate <MPPProtobufferCoding>
{
    MPMediaPredicate *_conditionPredicate;	// 8 = 0x8
    MPMediaPredicate *_thenPredicate;	// 16 = 0x10
    MPMediaPredicate *_elsePredicate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ae62a
+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;	// IMP=0x00000000000ae597
- (void).cxx_destruct;	// IMP=0x00000000000ae555
@property(readonly, copy, nonatomic) MPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(readonly, copy, nonatomic) MPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(readonly, copy, nonatomic) MPMediaPredicate *conditionPredicate; // @synthesize conditionPredicate=_conditionPredicate;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;	// IMP=0x00000000000ae3cd
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;	// IMP=0x00000000000ae16e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae0d8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000adfb3
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;	// IMP=0x00000000000adeed
- (id)ML3PredicateForContainer;	// IMP=0x000000000013ac7d
- (id)ML3PredicateForTrack;	// IMP=0x000000000013ac68
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;	// IMP=0x000000000013ab31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

