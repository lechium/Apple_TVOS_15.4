//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLAssetsdNotificationClient
{
}

- (void)asyncNotifyEndOfInterestForUnrenderedCinematicVideoItems;	// IMP=0x000000000000c14c
- (void)asyncNotifyStartOfInterestForUnrenderedCinematicVideoItems;	// IMP=0x000000000000be5c
- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;	// IMP=0x000000000000bafe
- (void)asyncNotifySuggestedCMMViewedForColletionID:(id)arg1;	// IMP=0x000000000000b7f6
- (void)asyncNotifySuggestedCMMNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2;	// IMP=0x000000000000b4d6
- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;	// IMP=0x000000000000b1d4
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)arg1;	// IMP=0x000000000000aed2
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2;	// IMP=0x000000000000abb2
- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 acceptInvitation:(_Bool)arg2;	// IMP=0x000000000000a8a9
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)arg1;	// IMP=0x000000000000a5a7

@end

