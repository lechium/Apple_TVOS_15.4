//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICStoreDialogResponse, NSArray, NSDate, NSDictionary, NSError;

@interface ICRadioResponse : NSObject
{
    NSDate *_expirationDate;	// 8 = 0x8
    NSArray *_performanceMetrics;	// 16 = 0x10
    NSDictionary *_responseDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001619f3
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSError *serverError;
@property(readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property(readonly, nonatomic) long long version;
@property(readonly, copy, nonatomic) NSDictionary *contentDictionary;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000000001615e7
- (id)initWithURLResponse:(id)arg1;	// IMP=0x0000000000161490

@end

