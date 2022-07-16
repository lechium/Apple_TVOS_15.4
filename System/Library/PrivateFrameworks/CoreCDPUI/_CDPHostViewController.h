//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <CoreCDPUI/CDPHostInterface-Protocol.h>

@class NSExtension;
@protocol NSCopying;

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface>
{
    id <NSCopying> _request;	// 8 = 0x8
    NSExtension *_weakExtension;	// 16 = 0x10
    CDUnknownBlockType _viewServiceTerminationBlock;	// 24 = 0x18
}

+ (id)serviceViewControllerInterface;	// IMP=0x000000000000a32d
+ (id)exportedInterface;	// IMP=0x000000000000a30d
- (void).cxx_destruct;	// IMP=0x000000000000a6f2
@property(copy, nonatomic) CDUnknownBlockType viewServiceTerminationBlock; // @synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock;
@property(nonatomic) __weak NSExtension *weakExtension; // @synthesize weakExtension=_weakExtension;
@property(retain, nonatomic) id <NSCopying> request; // @synthesize request=_request;
- (void)dealloc;	// IMP=0x000000000000a5be
- (double)_keyboardHeightOffset;	// IMP=0x000000000000a3d1
- (void)hostKeyboardOffset:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a34d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000a297
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000a21e
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000000a1a5

@end

