//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSHomeKitCloudRelayServiceUserIDsMessage : FTIDSMessage
{
    NSArray *_responseServiceUserIDs;	// 232 = 0xe8
    NSString *_userID;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0020000000651ed0
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSArray *responseServiceUserIDs; // @synthesize responseServiceUserIDs=_responseServiceUserIDs;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000651b90
- (id)messageBody;	// IMP=0x0010000000651ab0
- (id)bagKey;	// IMP=0x0010000000651a90
- (id)additionalMessageHeaders;	// IMP=0x0010000000651930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006517f0

@end
