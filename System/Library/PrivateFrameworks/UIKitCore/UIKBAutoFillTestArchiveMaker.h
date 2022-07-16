//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSKeyedArchiverDelegate-Protocol.h>

@class NSString, UIKBAutoFillTestArchive, UIViewController;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestArchiveMaker : NSObject <NSKeyedArchiverDelegate>
{
    UIKBAutoFillTestArchive *_testArchive;	// 8 = 0x8
    UIViewController *_viewControllerToSnapshot;	// 16 = 0x10
    long long _currentTableViewTag;	// 24 = 0x18
    long long _currentTextFieldTag;	// 32 = 0x20
}

+ (id)archiveMakerWithViewControllerToSnapshot:(id)arg1;	// IMP=0x00000000007a7784
- (void).cxx_destruct;	// IMP=0x00000000007aa136
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x00000000007a9d1c
- (id)_makeCopyOfObject:(id)arg1;	// IMP=0x00000000007a9be5
- (id)_cloneNavigationItem:(id)arg1;	// IMP=0x00000000007a98db
- (id)_cloneBarButtonItem:(id)arg1;	// IMP=0x00000000007a95c9
- (id)_cloneViewHierarchyFromRootView:(id)arg1;	// IMP=0x00000000007a937c
- (id)_cloneTableView:(id)arg1;	// IMP=0x00000000007a8a2b
- (id)_cloneGenericView:(id)arg1;	// IMP=0x00000000007a897d
- (id)_cloneButton:(id)arg1;	// IMP=0x00000000007a8729
- (id)_cloneTextView:(id)arg1;	// IMP=0x00000000007a8438
- (id)_cloneTextField:(id)arg1;	// IMP=0x00000000007a8084
- (id)_cloneLabel:(id)arg1;	// IMP=0x00000000007a7fd6
- (void)_applyPropertiesFromLabel:(id)arg1 toLabel:(id)arg2;	// IMP=0x00000000007a7d98
- (void)_applyPropertiesFromView:(id)arg1 toView:(id)arg2;	// IMP=0x00000000007a7c0a
- (id)_cloneView:(id)arg1;	// IMP=0x00000000007a7b28
- (id)makeArchive;	// IMP=0x00000000007a783a
- (id)initWithViewControllerToSnapshot:(id)arg1;	// IMP=0x00000000007a77cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

