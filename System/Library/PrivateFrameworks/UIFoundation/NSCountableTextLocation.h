//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSTextLocationPrivate-Protocol.h>

@class NSString;

@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate>
{
    unsigned long long _characterIndex;	// 8 = 0x8
}

+ (id)endOfDocumentLocation;	// IMP=0x000000000007ecf3
@property(readonly) unsigned long long characterIndex; // @synthesize characterIndex=_characterIndex;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007efad
- (_Bool)isEqualToTextLocation:(id)arg1;	// IMP=0x000000000007ef54
- (long long)compare:(id)arg1;	// IMP=0x000000000007ee7a
@property(readonly, copy) NSString *type;
@property(readonly) unsigned long long hash;
- (id)initWithIndex:(unsigned long long)arg1;	// IMP=0x000000000007ee26
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, getter=isEndOfDocument) _Bool endOfDocument;

// Remaining properties
@property(readonly) Class superclass;

@end

