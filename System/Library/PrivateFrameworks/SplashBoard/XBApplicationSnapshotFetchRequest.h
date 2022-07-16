//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, XBApplicationSnapshotGenerationContext, XBApplicationSnapshotPredicate;

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding>
{
    XBApplicationSnapshotPredicate *_predicate;	// 8 = 0x8
    NSArray *_sortDescriptors;	// 16 = 0x10
    XBApplicationSnapshotGenerationContext *_fallbackGenerationContext;	// 24 = 0x18
}

+ (id)fetchRequest;	// IMP=0x000000000002c8ec
- (void).cxx_destruct;	// IMP=0x000000000002cd43
@property(retain, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext; // @synthesize fallbackGenerationContext=_fallbackGenerationContext;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) XBApplicationSnapshotPredicate *predicate; // @synthesize predicate=_predicate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002cb87
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002cb37
- (id)succinctDescriptionBuilder;	// IMP=0x000000000002cb1b
- (id)succinctDescription;	// IMP=0x000000000002cacb
@property(readonly, copy, nonatomic) NSArray *NSSortDescriptors;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

