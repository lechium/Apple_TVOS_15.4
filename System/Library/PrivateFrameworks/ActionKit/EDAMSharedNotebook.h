//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMSharedNotebookRecipientSettings, NSNumber, NSString;

@interface EDAMSharedNotebook
{
    NSNumber *_id;	// 8 = 0x8
    NSNumber *_userId;	// 16 = 0x10
    NSString *_notebookGuid;	// 24 = 0x18
    NSString *_email;	// 32 = 0x20
    NSNumber *_recipientIdentityId;	// 40 = 0x28
    NSNumber *_notebookModifiable;	// 48 = 0x30
    NSNumber *_serviceCreated;	// 56 = 0x38
    NSNumber *_serviceUpdated;	// 64 = 0x40
    NSString *_globalId;	// 72 = 0x48
    NSString *_username;	// 80 = 0x50
    NSNumber *_privilege;	// 88 = 0x58
    EDAMSharedNotebookRecipientSettings *_recipientSettings;	// 96 = 0x60
    NSNumber *_sharerUserId;	// 104 = 0x68
    NSString *_recipientUsername;	// 112 = 0x70
    NSNumber *_recipientUserId;	// 120 = 0x78
    NSNumber *_serviceAssigned;	// 128 = 0x80
}

+ (id)structFields;	// IMP=0x00000000002276cf
+ (id)structName;	// IMP=0x00000000002276c2
- (void).cxx_destruct;	// IMP=0x0000000000227dc8
@property(retain, nonatomic) NSNumber *serviceAssigned; // @synthesize serviceAssigned=_serviceAssigned;
@property(retain, nonatomic) NSNumber *recipientUserId; // @synthesize recipientUserId=_recipientUserId;
@property(retain, nonatomic) NSString *recipientUsername; // @synthesize recipientUsername=_recipientUsername;
@property(retain, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;
@property(retain, nonatomic) EDAMSharedNotebookRecipientSettings *recipientSettings; // @synthesize recipientSettings=_recipientSettings;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *globalId; // @synthesize globalId=_globalId;
@property(retain, nonatomic) NSNumber *serviceUpdated; // @synthesize serviceUpdated=_serviceUpdated;
@property(retain, nonatomic) NSNumber *serviceCreated; // @synthesize serviceCreated=_serviceCreated;
@property(retain, nonatomic) NSNumber *notebookModifiable; // @synthesize notebookModifiable=_notebookModifiable;
@property(retain, nonatomic) NSNumber *recipientIdentityId; // @synthesize recipientIdentityId=_recipientIdentityId;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *notebookGuid; // @synthesize notebookGuid=_notebookGuid;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end

