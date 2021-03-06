//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMutableMetadataItemInternal, NSDictionary, NSLocale, NSString;
@protocol NSObject><NSCopying;

@interface AVMutableMetadataItem
{
    AVMutableMetadataItemInternal *_mutablePriv;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffectingIdentifier;	// IMP=0x000000000001ca32
+ (id)metadataItem;	// IMP=0x000000000001c701
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001cd4f
@property(copy, nonatomic) NSDictionary *extraAttributes;
@property(copy, nonatomic) NSString *dataType;
@property(copy, nonatomic) id <NSObject><NSCopying> value;
- (void)setStartDate:(id)arg1;	// IMP=0x000000000001cb61
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) CDStruct_1b6d18a9 time;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSLocale *locale;
@property(copy, nonatomic) NSString *identifier;
- (void)setKeySpace:(id)arg1;	// IMP=0x000000000001c89b
- (void)setKey:(id)arg1;	// IMP=0x000000000001c81b
- (id)startDate;	// IMP=0x000000000001c7cd
- (id)languageCode;	// IMP=0x000000000001c784
- (id)keySpace;	// IMP=0x000000000001c728
- (id)key;	// IMP=0x000000000001c71a

@end

