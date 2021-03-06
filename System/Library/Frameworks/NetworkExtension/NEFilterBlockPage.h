//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject
{
    NSString *_organization;	// 8 = 0x8
    NSURL *_pageTemplateURL;	// 16 = 0x10
    NSString *_userURL;	// 24 = 0x18
    NSString *_formActionURL;	// 32 = 0x20
    NSString *_unblockStyle;	// 40 = 0x28
    NSString *_remediationButtonText;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004f949
@property(copy) NSString *remediationButtonText; // @synthesize remediationButtonText=_remediationButtonText;
@property(copy) NSString *unblockStyle; // @synthesize unblockStyle=_unblockStyle;
@property(copy) NSString *formActionURL; // @synthesize formActionURL=_formActionURL;
@property(copy) NSString *userURL; // @synthesize userURL=_userURL;
@property(readonly) NSURL *pageTemplateURL; // @synthesize pageTemplateURL=_pageTemplateURL;
- (id)page;	// IMP=0x000000000004f700
@property(copy) NSString *organization;
- (id)_css;	// IMP=0x000000000004f56e
- (id)_blockPage;	// IMP=0x000000000004f470
- (id)init;	// IMP=0x000000000004f37a

@end

