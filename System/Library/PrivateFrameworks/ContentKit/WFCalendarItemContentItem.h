//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class EKCalendarItem, EKEventStore, NSString;

@interface WFCalendarItemContentItem <WFContentItemClass>
{
    EKEventStore *_eventStore;	// 8 = 0x8
}

+ (id)countDescription;	// IMP=0x0000000000026a7a
+ (id)pluralTypeDescription;	// IMP=0x0000000000026a69
+ (id)typeDescription;	// IMP=0x0000000000026a58
+ (id)contentCategories;	// IMP=0x00000000000269db
+ (id)outputTypes;	// IMP=0x0000000000026806
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;	// IMP=0x00000000000266db
+ (id)propertyBuilders;	// IMP=0x000000000002606e
- (void).cxx_destruct;	// IMP=0x0000000000025cfe
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (_Bool)canGenerateRepresentationForType:(id)arg1;	// IMP=0x0000000000025afa
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025941
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025872
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;	// IMP=0x0000000000025461
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
- (id)attachments;	// IMP=0x0000000000025286
- (void)copyStateToItem:(id)arg1;	// IMP=0x000000000002526b
- (id)changeTransaction;	// IMP=0x0000000000025200

@end

