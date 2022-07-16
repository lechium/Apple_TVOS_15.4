//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKSource, NSString;

@interface EKNotificationCollectionOptions : NSObject
{
    EKSource *_source;	// 8 = 0x8
    NSString *_externalID;	// 16 = 0x10
    NSString *_externalIDTag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000032ec4
@property(readonly, nonatomic) NSString *externalIDTag; // @synthesize externalIDTag=_externalIDTag;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) EKSource *source; // @synthesize source=_source;
- (id)description;	// IMP=0x0000000000032dcf
- (id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3;	// IMP=0x0000000000032d18

@end
