//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIScreenRoutePickerRemoteViewControllerHost-Protocol.h>

@class NSExtension, NSString, _UIScreenRoutePickerViewController;
@protocol NSCopying><NSObject;

__attribute__((visibility("hidden")))
@interface _UIScreenRoutePickerRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost>
{
    _UIScreenRoutePickerViewController *_publicController;	// 8 = 0x8
    NSExtension *_extension;	// 16 = 0x10
    id <NSCopying><NSObject> _extensionRequestIdentifier;	// 24 = 0x18
}

+ (id)exportedInterface;	// IMP=0x00000000007731b3
+ (id)serviceViewControllerInterface;	// IMP=0x0000000000773193
- (void).cxx_destruct;	// IMP=0x0000000000773470
@property(copy, nonatomic) id <NSCopying><NSObject> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak _UIScreenRoutePickerViewController *publicController; // @synthesize publicController=_publicController;
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x000000000077332e
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000007732ed
- (void)_dismissViewController;	// IMP=0x0000000000773237
- (void)invalidate;	// IMP=0x00000000007731d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

