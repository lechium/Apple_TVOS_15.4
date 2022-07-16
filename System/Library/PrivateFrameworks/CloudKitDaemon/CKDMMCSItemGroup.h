//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAssetDownloadPreauthorization, NSArray, NSData, NSError, NSMutableArray, NSString, NSURL;
@protocol MMCSOperationMetric;

@interface CKDMMCSItemGroup : NSObject
{
    NSMutableArray *_items;	// 8 = 0x8
    _Bool _complete;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    id <MMCSOperationMetric> _metrics;	// 32 = 0x20
    NSData *_authPutRequest;	// 40 = 0x28
    NSArray *_tuple;	// 48 = 0x30
}

+ (id)tupleForItem:(id)arg1;	// IMP=0x000000000018422d
- (void).cxx_destruct;	// IMP=0x0000000000184d64
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSArray *tuple; // @synthesize tuple=_tuple;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) id <MMCSOperationMetric> metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)addItem:(id)arg1;	// IMP=0x0000000000184cc6
@property(readonly, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property(readonly, nonatomic) NSString *requestor;
@property(readonly, nonatomic) NSString *owner;
@property(readonly, nonatomic) NSURL *contentBaseURL;
- (id)description;	// IMP=0x0000000000184abc
- (id)CKPropertiesDescription;	// IMP=0x00000000001844b1
- (id)initWithTuple:(id)arg1;	// IMP=0x000000000018442c

@end
