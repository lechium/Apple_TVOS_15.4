//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PSPhotoSuggestions : NSObject
{
}

+ (id)photoSuggestedPeopleFromAttachments:(id)arg1;	// IMP=0x00000000000984af
+ (id)partitionPeopleSuggestionProxiesFromPhotosByAssetPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;	// IMP=0x0000000000097bdf
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)arg1 cdInteraction:(id)arg2 reason:(id)arg3 reasonType:(id)arg4;	// IMP=0x0000000000097735
+ (id)contactIDsByAssetPresenceInAttachments:(id)arg1;	// IMP=0x00000000000971d1

@end

