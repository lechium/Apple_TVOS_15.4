//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEvent <NSCopying>
{
    NSString *_canonicalID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006ecf
@property(copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (id)_purchaseEventDescriptor;	// IMP=0x0000000000006e9b
- (id)dictionaryRepresentation;	// IMP=0x0000000000006dbb
- (id)initWithPurchaseEventDescriptor:(id)arg1;	// IMP=0x0000000000006d8c
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000006d1d

@end
