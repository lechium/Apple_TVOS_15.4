//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSExtension, NSString;
@protocol NSCopying;

@interface _UNNotificationContentExtensionHostViewController : _UIRemoteViewController
{
    NSExtension *_extension;	// 8 = 0x8
    id <NSCopying> _extensionRequestIdentifier;	// 16 = 0x10
    NSString *_notificationRequestIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000018a9
@property(copy, nonatomic) NSString *notificationRequestIdentifier; // @synthesize notificationRequestIdentifier=_notificationRequestIdentifier;
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(nonatomic) __weak NSExtension *extension; // @synthesize extension=_extension;
- (id)description;	// IMP=0x0000000000001723
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000000016d2
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000016ca
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000000014e6
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000001437
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000001388
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000012d9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000122a
- (_Bool)__shouldRemoteViewControllerFenceOperations;	// IMP=0x0000000000001222
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000011f3

@end

