//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord;
@protocol WFCloudKitItem;

@interface WFCloudKitItemRecord : NSObject
{
    CKRecord *_record;	// 8 = 0x8
    id <WFCloudKitItem> _item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015c732
@property(readonly, nonatomic) id <WFCloudKitItem> item; // @synthesize item=_item;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (id)initWithRecord:(id)arg1 item:(id)arg2;	// IMP=0x000000000015c676

@end
