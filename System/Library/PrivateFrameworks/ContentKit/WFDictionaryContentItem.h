//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSDictionary;

@interface WFDictionaryContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x0000000000029488
+ (id)pluralTypeDescription;	// IMP=0x0000000000029477
+ (id)typeDescription;	// IMP=0x0000000000029466
+ (id)contentCategories;	// IMP=0x00000000000293ff
+ (id)outputTypes;	// IMP=0x0000000000029383
+ (id)ownedTypes;	// IMP=0x000000000002923a
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3 attributionSet:(id)arg4;	// IMP=0x000000000002917b
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 attributionSet:(id)arg3;	// IMP=0x0000000000029163
+ (id)itemsWithPlistFileRepresentation:(id)arg1 attributionSet:(id)arg2;	// IMP=0x0000000000029017
+ (id)itemsWithJSONFileRepresentation:(id)arg1 attributionSet:(id)arg2;	// IMP=0x0000000000028d68
+ (id)propertyBuilders;	// IMP=0x0000000000028bdc
- (id)allowedClassesForDecodingInternalRepresentations;	// IMP=0x00000000000285ef
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000281e4
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000279cc
- (id)preferredFileType;	// IMP=0x0000000000027941
@property(readonly, nonatomic) NSDictionary *dictionary;

@end

