//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMLazyMap, NSDictionary, NSNumber, NSString;

@interface EDAMNoteAttributes
{
    NSNumber *_subjectDate;	// 8 = 0x8
    NSNumber *_latitude;	// 16 = 0x10
    NSNumber *_longitude;	// 24 = 0x18
    NSNumber *_altitude;	// 32 = 0x20
    NSString *_author;	// 40 = 0x28
    NSString *_source;	// 48 = 0x30
    NSString *_sourceURL;	// 56 = 0x38
    NSString *_sourceApplication;	// 64 = 0x40
    NSNumber *_shareDate;	// 72 = 0x48
    NSNumber *_reminderOrder;	// 80 = 0x50
    NSNumber *_reminderDoneTime;	// 88 = 0x58
    NSNumber *_reminderTime;	// 96 = 0x60
    NSString *_placeName;	// 104 = 0x68
    NSString *_contentClass;	// 112 = 0x70
    EDAMLazyMap *_applicationData;	// 120 = 0x78
    NSString *_lastEditedBy;	// 128 = 0x80
    NSDictionary *_classifications;	// 136 = 0x88
    NSNumber *_creatorId;	// 144 = 0x90
    NSNumber *_lastEditorId;	// 152 = 0x98
    NSNumber *_sharedWithBusiness;	// 160 = 0xa0
    NSString *_conflictSourceNoteGuid;	// 168 = 0xa8
    NSNumber *_noteTitleQuality;	// 176 = 0xb0
}

+ (id)structFields;	// IMP=0x00000000002242c7
+ (id)structName;	// IMP=0x00000000002242ba
- (void).cxx_destruct;	// IMP=0x0000000000224cba
@property(retain, nonatomic) NSNumber *noteTitleQuality; // @synthesize noteTitleQuality=_noteTitleQuality;
@property(retain, nonatomic) NSString *conflictSourceNoteGuid; // @synthesize conflictSourceNoteGuid=_conflictSourceNoteGuid;
@property(retain, nonatomic) NSNumber *sharedWithBusiness; // @synthesize sharedWithBusiness=_sharedWithBusiness;
@property(retain, nonatomic) NSNumber *lastEditorId; // @synthesize lastEditorId=_lastEditorId;
@property(retain, nonatomic) NSNumber *creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSDictionary *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) NSString *lastEditedBy; // @synthesize lastEditedBy=_lastEditedBy;
@property(retain, nonatomic) EDAMLazyMap *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSString *contentClass; // @synthesize contentClass=_contentClass;
@property(retain, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(retain, nonatomic) NSNumber *reminderTime; // @synthesize reminderTime=_reminderTime;
@property(retain, nonatomic) NSNumber *reminderDoneTime; // @synthesize reminderDoneTime=_reminderDoneTime;
@property(retain, nonatomic) NSNumber *reminderOrder; // @synthesize reminderOrder=_reminderOrder;
@property(retain, nonatomic) NSNumber *shareDate; // @synthesize shareDate=_shareDate;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSNumber *altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *subjectDate; // @synthesize subjectDate=_subjectDate;

@end
