//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSProgress, NSString, NSURL, TVTopShelfAction;

@interface HBTopShelfAction : NSObject
{
    TVTopShelfAction *_topShelfAction;	// 8 = 0x8
}

+ (id)_dummyURL;	// IMP=0x0020000000027f0c
- (void).cxx_destruct;	// IMP=0x0020000000027f82
@property(readonly, nonatomic) TVTopShelfAction *topShelfAction; // @synthesize topShelfAction=_topShelfAction;
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000027ebc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000027d97
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000027d12
- (id)succinctDescription;	// IMP=0x0010000000027cc2
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSProgress *installApplicationProgress;
@property(readonly, nonatomic) NSString *imageName;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool showsActivityIndicatorWhilePerformingCustomAction;
@property(readonly, nonatomic) _Bool showShroud;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)_init;	// IMP=0x0010000000027a40
- (id)initWithTopShelfAction:(id)arg1;	// IMP=0x00100000000279d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

