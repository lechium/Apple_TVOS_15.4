//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray, NSSet, NSString, TDSchemaDefinition;

@interface TDSchemaPartDefinition : NSManagedObject
{
    CUIImage *previewImage;	// 8 = 0x8
    NSArray *renditions;	// 16 = 0x10
    NSArray *renditionGroups;	// 24 = 0x18
    unsigned long long partFeatures;	// 32 = 0x20
}

@property(nonatomic) unsigned long long partFeatures; // @synthesize partFeatures;
@property(retain, nonatomic) NSArray *renditionGroups; // @synthesize renditionGroups;
@property(copy, nonatomic) NSArray *renditions; // @synthesize renditions;
@property(retain, nonatomic) CUIImage *previewImage; // @synthesize previewImage;
- (void)didTurnIntoFault;	// IMP=0x000000000000294a
- (const CDStruct_26b2aa83 *)cuiPartDefinition;	// IMP=0x00000000000027ee
- (id)displayName;	// IMP=0x00000000000027bb
- (long long)partID;	// IMP=0x0000000000002797
- (long long)elementID;	// IMP=0x0000000000002773
- (long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;	// IMP=0x0000000000002681
- (id)validStatesWithDocument:(id)arg1;	// IMP=0x0000000000002506
- (void)updateDerivedRenditionData;	// IMP=0x0000000000002377
- (id)_schema;	// IMP=0x0000000000002359
- (id)bestPreviewRendition;	// IMP=0x0000000000002343
- (void)dealloc;	// IMP=0x00000000000022dd

// Remaining properties
@property(retain, nonatomic) TDSchemaDefinition *element; // @dynamic element;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *productions; // @dynamic productions;
@property(retain, nonatomic) NSString *widgetID; // @dynamic widgetID;

@end

