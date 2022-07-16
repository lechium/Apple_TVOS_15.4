//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSData, NSString;

@interface WFCloudKitFolder : NSObject <WFCloudKitItem>
{
    unsigned short _icon;	// 8 = 0x8
    CKRecordID *_identifier;	// 16 = 0x10
    NSData *_recordSystemFieldsData;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

+ (id)collectionIdentifierForRecordID:(id)arg1;	// IMP=0x00000000000a04ec
+ (_Bool)isFolderRecordID:(id)arg1;	// IMP=0x00000000000a049e
+ (id)recordIDWithZoneID:(id)arg1 collectionIdentifier:(id)arg2;	// IMP=0x00000000000a02ff
+ (id)properties;	// IMP=0x00000000000a0210
+ (id)recordType;	// IMP=0x00000000000a0203
- (void).cxx_destruct;	// IMP=0x00000000000a06ae
@property(nonatomic) unsigned short icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSData *recordSystemFieldsData; // @synthesize recordSystemFieldsData=_recordSystemFieldsData;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)initWithCollection:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000a05a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
