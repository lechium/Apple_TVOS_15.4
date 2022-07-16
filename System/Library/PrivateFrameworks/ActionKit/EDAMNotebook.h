//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMBusinessNotebook, EDAMNotebookRecipientSettings, EDAMNotebookRestrictions, EDAMPublishing, EDAMUser, NSArray, NSNumber, NSString;

@interface EDAMNotebook
{
    NSString *_guid;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSNumber *_updateSequenceNum;	// 24 = 0x18
    NSNumber *_defaultNotebook;	// 32 = 0x20
    NSNumber *_serviceCreated;	// 40 = 0x28
    NSNumber *_serviceUpdated;	// 48 = 0x30
    EDAMPublishing *_publishing;	// 56 = 0x38
    NSNumber *_published;	// 64 = 0x40
    NSString *_stack;	// 72 = 0x48
    NSArray *_sharedNotebookIds;	// 80 = 0x50
    NSArray *_sharedNotebooks;	// 88 = 0x58
    EDAMBusinessNotebook *_businessNotebook;	// 96 = 0x60
    EDAMUser *_contact;	// 104 = 0x68
    EDAMNotebookRestrictions *_restrictions;	// 112 = 0x70
    EDAMNotebookRecipientSettings *_recipientSettings;	// 120 = 0x78
}

+ (id)structFields;	// IMP=0x00000000002289c7
+ (id)structName;	// IMP=0x00000000002289ba
- (void).cxx_destruct;	// IMP=0x000000000022914d
@property(retain, nonatomic) EDAMNotebookRecipientSettings *recipientSettings; // @synthesize recipientSettings=_recipientSettings;
@property(retain, nonatomic) EDAMNotebookRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) EDAMUser *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) EDAMBusinessNotebook *businessNotebook; // @synthesize businessNotebook=_businessNotebook;
@property(retain, nonatomic) NSArray *sharedNotebooks; // @synthesize sharedNotebooks=_sharedNotebooks;
@property(retain, nonatomic) NSArray *sharedNotebookIds; // @synthesize sharedNotebookIds=_sharedNotebookIds;
@property(retain, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) NSNumber *published; // @synthesize published=_published;
@property(retain, nonatomic) EDAMPublishing *publishing; // @synthesize publishing=_publishing;
@property(retain, nonatomic) NSNumber *serviceUpdated; // @synthesize serviceUpdated=_serviceUpdated;
@property(retain, nonatomic) NSNumber *serviceCreated; // @synthesize serviceCreated=_serviceCreated;
@property(retain, nonatomic) NSNumber *defaultNotebook; // @synthesize defaultNotebook=_defaultNotebook;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;

@end

