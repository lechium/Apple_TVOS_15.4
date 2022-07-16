//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXInboxModel-Protocol.h>
#import <PhotosUICore/PXInboxPreviewItem-Protocol.h>

@class NSArray, NSDate, NSString;

@interface PXSampleInboxModel : NSObject <PXInboxPreviewItem, PXInboxModel>
{
    _Bool _userIsSender;	// 8 = 0x8
    _Bool _seen;	// 9 = 0x9
    NSDate *_creationDate;	// 16 = 0x10
    long long _inboxModelType;	// 24 = 0x18
    NSString *_inboxModelTitle;	// 32 = 0x20
    unsigned long long _assetsCount;	// 40 = 0x28
    NSArray *_senderNames;	// 48 = 0x30
    NSArray *_assetsForOneUp;	// 56 = 0x38
    long long _type;	// 64 = 0x40
}

+ (id)oldDate;	// IMP=0x00000000005a9443
- (void).cxx_destruct;	// IMP=0x00000000005a960f
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, getter=isSeen) _Bool seen; // @synthesize seen=_seen;
@property(nonatomic) _Bool userIsSender; // @synthesize userIsSender=_userIsSender;
@property(copy, nonatomic) NSArray *senderNames; // @synthesize senderNames=_senderNames;
@property(nonatomic) unsigned long long assetsCount; // @synthesize assetsCount=_assetsCount;
@property(copy, nonatomic) NSString *inboxModelTitle; // @synthesize inboxModelTitle=_inboxModelTitle;
@property(readonly, nonatomic) long long inboxModelType; // @synthesize inboxModelType=_inboxModelType;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSArray *assetsForOneUp; // @synthesize assetsForOneUp=_assetsForOneUp;
@property(readonly, nonatomic) NSArray *leftPreviewItems;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a94f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *keyCommentGUID;
@property(readonly, nonatomic) NSString *ownerEmail;
@property(readonly, nonatomic) NSString *ownerFirstName;
@property(readonly, nonatomic) NSString *ownerLastName;
@property(readonly) Class superclass;

@end
