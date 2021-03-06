//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMoreResults-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMoreResults : NSObject <SFMoreResults, NSSecureCoding, NSCopying>
{
    NSString *_label;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d4102
- (void).cxx_destruct;	// IMP=0x00000000001d4389
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d430b
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d41bc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d410a
- (void)loadSearchResultsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002293b
- (void)loadSearchResultsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000228bc
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001df53a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

