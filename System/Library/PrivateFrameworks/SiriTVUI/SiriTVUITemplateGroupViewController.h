//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/SiriTVUITemplateItemViewControllerDelegate-Protocol.h>
#import <SiriTVUI/SiriTVUITemplatedViewDelegate-Protocol.h>

@class NSString, SiriTVUIGroupViewTemplateItem, SiriTVUITemplateGroupView;

@interface SiriTVUITemplateGroupViewController <SiriTVUITemplateItemViewControllerDelegate, SiriTVUITemplatedViewDelegate>
{
}

- (struct UIEdgeInsets)paddingForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000f0b5
- (void)templateItemViewController:(id)arg1 selectTemplateItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000000f01b
- (void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x000000000000ef55
- (void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(_Bool)arg4;	// IMP=0x000000000000ee2a
@property(readonly, nonatomic) struct UIEdgeInsets contentMargins;
@property(readonly, nonatomic) double fullScreenFraction;
- (void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(_Bool)arg4;	// IMP=0x000000000000eb6a
- (void)viewDidLoad;	// IMP=0x000000000000e8d1
- (void)loadView;	// IMP=0x000000000000e794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriTVUIGroupViewTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateGroupView *view; // @dynamic view;

@end
