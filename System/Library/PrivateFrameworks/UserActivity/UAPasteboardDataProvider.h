//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPasteboardItemProviding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding>
{
    NSString *_type;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003f09b
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ee15
- (id)initWithData:(id)arg1 type:(id)arg2;	// IMP=0x000000000003ed3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

