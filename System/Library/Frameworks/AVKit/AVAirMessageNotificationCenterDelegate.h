//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVAirMessageNotificationCenterDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVAirMessageNotificationCenterDelegate : NSObject <AVAirMessageNotificationCenterDelegate>
{
}

+ (id)shared;	// IMP=0x000000000004fd90
- (void)airTrafficController:(id)arg1 didReceiveMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f686
- (void)_updatePlayerItem:(id)arg1 externalMetadata:(id)arg2 newArtwork:(id)arg3;	// IMP=0x000000000004f250
- (id)airTrafficControllerCurrentItemIdentifier:(id)arg1;	// IMP=0x000000000004f200
- (id)currentPlayerItem;	// IMP=0x000000000004f161
- (id)initPrivate;	// IMP=0x000000000004f132

@end

