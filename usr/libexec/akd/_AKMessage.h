//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _AKMessage : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
}

+ (id)messageFromTransportRepresentation:(id)arg1;	// IMP=0x0040000000028a43
+ (unsigned long long)typeForMessageWithTransportRepresentation:(id)arg1;	// IMP=0x00100000000289f5
- (void).cxx_destruct;	// IMP=0x0020000000028bee
- (id)transportRepresentation;	// IMP=0x0010000000028be0
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x0010000000028aab

@end

