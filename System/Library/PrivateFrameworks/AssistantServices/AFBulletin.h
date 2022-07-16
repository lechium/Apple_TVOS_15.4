//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class BBBulletin, NSArray, NSDate, NSDictionary, NSString;

@interface AFBulletin : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _availableOnLockScreen;	// 8 = 0x8
    _Bool _supportsSpokenNotification;	// 9 = 0x9
    _Bool _read;	// 10 = 0xa
    _Bool _allDay;	// 11 = 0xb
    _Bool _previewRestricted;	// 12 = 0xc
    NSString *_displayName;	// 16 = 0x10
    long long _announcementType;	// 24 = 0x18
    BBBulletin *_bbBulletin;	// 32 = 0x20
    NSString *_bulletinID;	// 40 = 0x28
    NSString *_recordID;	// 48 = 0x30
    NSDate *_date;	// 56 = 0x38
    NSDate *_endDate;	// 64 = 0x40
    NSString *_message;	// 72 = 0x48
    NSString *_modalAlertContentMessage;	// 80 = 0x50
    NSDate *_recencyDate;	// 88 = 0x58
    NSString *_sectionID;	// 96 = 0x60
    long long _sectionSubtype;	// 104 = 0x68
    NSString *_subtitle;	// 112 = 0x70
    NSString *_timeZone;	// 120 = 0x78
    NSString *_title;	// 128 = 0x80
    NSArray *_intentIDs;	// 136 = 0x88
    NSString *_publisherBulletinID;	// 144 = 0x90
    NSString *_threadID;	// 152 = 0x98
    NSString *_internalID;	// 160 = 0xa0
    NSArray *_actionsStore;	// 168 = 0xa8
    NSDictionary *_actionsByIdentifier;	// 176 = 0xb0
    unsigned long long _feed;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011d064
+ (id)internalIDForBBBulletinID:(id)arg1;	// IMP=0x000000000011d00e
+ (id)_createAssistantActionsForBulletin:(id)arg1;	// IMP=0x000000000011c35f
- (void).cxx_destruct;	// IMP=0x000000000011d912
@property(readonly, nonatomic) unsigned long long feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSDictionary *actionsByIdentifier; // @synthesize actionsByIdentifier=_actionsByIdentifier;
@property(retain, nonatomic) NSArray *actionsStore; // @synthesize actionsStore=_actionsStore;
@property(readonly, copy, nonatomic) NSString *internalID; // @synthesize internalID=_internalID;
@property(readonly, copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) _Bool previewRestricted; // @synthesize previewRestricted=_previewRestricted;
@property(readonly, copy, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(readonly, copy, nonatomic) NSArray *intentIDs; // @synthesize intentIDs=_intentIDs;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) long long sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(readonly, copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, copy, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(readonly, copy, nonatomic) NSString *modalAlertContentMessage; // @synthesize modalAlertContentMessage=_modalAlertContentMessage;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(readonly, nonatomic) BBBulletin *bbBulletin; // @synthesize bbBulletin=_bbBulletin;
@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
@property(nonatomic) long long announcementType; // @synthesize announcementType=_announcementType;
@property(nonatomic) _Bool supportsSpokenNotification; // @synthesize supportsSpokenNotification=_supportsSpokenNotification;
@property(nonatomic) _Bool availableOnLockScreen; // @synthesize availableOnLockScreen=_availableOnLockScreen;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011d78a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011d559
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011d06c
- (void)wasRemovedFromFeed:(unsigned long long)arg1;	// IMP=0x000000000011cffe
- (void)setNotification:(id)arg1 fromSourceApp:(id)arg2;	// IMP=0x000000000011cd52
- (void)setBulletin:(id)arg1 forFeed:(unsigned long long)arg2;	// IMP=0x000000000011ca23
- (id)actionForIdentifier:(id)arg1;	// IMP=0x000000000011c9b2
- (id)actions;	// IMP=0x000000000011c738
- (void)setBulletin:(id)arg1;	// IMP=0x000000000011c724
- (id)_displayNameForBulletin:(id)arg1;	// IMP=0x000000000011c229

@end
