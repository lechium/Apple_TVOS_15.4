//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OBPrivacyLinkView;

__attribute__((visibility("hidden")))
@interface OBPrivacyLinkController_tvOS
{
    OBPrivacyLinkView *_linkView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a296
@property(retain, nonatomic) OBPrivacyLinkView *linkView; // @synthesize linkView=_linkView;
- (void)setLinkEnabled:(_Bool)arg1;	// IMP=0x000000000000a21a
- (void)loadView;	// IMP=0x0000000000009ff7
- (id)initWithBundleIdentifiers:(id)arg1;	// IMP=0x0000000000009f8f
- (id)initWithPrivacyBundle:(id)arg1;	// IMP=0x0000000000009f27

@end

