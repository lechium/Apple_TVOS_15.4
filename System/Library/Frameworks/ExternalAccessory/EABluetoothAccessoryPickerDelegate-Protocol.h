//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExternalAccessory/NSObject-Protocol.h>

@class EABluetoothAccessoryPicker, NSString;

@protocol EABluetoothAccessoryPickerDelegate <NSObject>

@optional
- (void)devicePicker:(EABluetoothAccessoryPicker *)arg1 didSelectAddress:(NSString *)arg2 errorCode:(long long)arg3;
@end

