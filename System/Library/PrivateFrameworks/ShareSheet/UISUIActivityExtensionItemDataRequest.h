//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding>
{
    _Bool _wantsThumbnailItemData;	// 8 = 0x8
    _Bool _wantsAttachmentURLItemData;	// 9 = 0x9
    _Bool _isAirDropActivity;	// 10 = 0xa
    _Bool _activitySupportsPromiseURLs;	// 11 = 0xb
    _Bool _sourceAppIsManaged;	// 12 = 0xc
    Class _classForPreparingExtensionItemData;	// 16 = 0x10
    NSUUID *_activityUUID;	// 24 = 0x18
    NSString *_activityType;	// 32 = 0x20
    long long _activityCategory;	// 40 = 0x28
    long long _maxPreviews;	// 48 = 0x30
    NSString *_extensionIdentifier;	// 56 = 0x38
    NSDictionary *_activitySpecificMetadata;	// 64 = 0x40
    struct CGSize _thumbnailSize;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000054ec7
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3;	// IMP=0x0000000000054c38
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 sourceAppIsManaged:(_Bool)arg3;	// IMP=0x0000000000054bed
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2;	// IMP=0x0000000000054bd8
- (void).cxx_destruct;	// IMP=0x00000000000558d9
@property(nonatomic) _Bool sourceAppIsManaged; // @synthesize sourceAppIsManaged=_sourceAppIsManaged;
@property(retain, nonatomic) NSDictionary *activitySpecificMetadata; // @synthesize activitySpecificMetadata=_activitySpecificMetadata;
@property(nonatomic) _Bool activitySupportsPromiseURLs; // @synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs;
@property(nonatomic) _Bool isAirDropActivity; // @synthesize isAirDropActivity=_isAirDropActivity;
@property(nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) long long maxPreviews; // @synthesize maxPreviews=_maxPreviews;
@property(nonatomic) _Bool wantsAttachmentURLItemData; // @synthesize wantsAttachmentURLItemData=_wantsAttachmentURLItemData;
@property(nonatomic) _Bool wantsThumbnailItemData; // @synthesize wantsThumbnailItemData=_wantsThumbnailItemData;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(readonly, nonatomic) Class classForPreparingExtensionItemData; // @synthesize classForPreparingExtensionItemData=_classForPreparingExtensionItemData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055365
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054ecf
- (id)_initWithClassForPreparingExtensionItemData:(Class)arg1;	// IMP=0x0000000000054e8a

@end
