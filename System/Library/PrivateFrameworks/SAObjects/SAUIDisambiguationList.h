//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAUIDomainObjectPicker;

@interface SAUIDisambiguationList
{
}

+ (id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000b94a
+ (id)disambiguationList;	// IMP=0x000000000000b938
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *speakableSuffix;
@property(copy, nonatomic) NSString *speakableSelectionResponse;
@property(copy, nonatomic) NSString *speakableFinalDelimiter;
@property(copy, nonatomic) NSString *speakableDelimiter;
@property(copy, nonatomic) NSString *selectionResponse;
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSString *groupTitle;
@property(copy, nonatomic) NSArray *fallbackCommands;
@property(retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property(copy, nonatomic) NSString *disambiguationKey;
@property(nonatomic) _Bool autoDisambiguationDisabled;
- (id)encodedClassName;	// IMP=0x000000000000b92b
- (id)groupIdentifier;	// IMP=0x000000000000b917

@end

