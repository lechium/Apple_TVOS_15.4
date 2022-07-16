//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

#import <ActionKit/NSFastEnumeration-Protocol.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration>
{
    struct _xmlXPathObject *_xmlXPath;	// 8 = 0x8
    unsigned long long _cursor;	// 16 = 0x10
    ONOXMLDocument *_document;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000027d884
@property(retain, nonatomic) ONOXMLDocument *document; // @synthesize document=_document;
@property(nonatomic) unsigned long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) struct _xmlXPathObject *xmlXPath; // @synthesize xmlXPath=_xmlXPath;
- (id)nextObject;	// IMP=0x000000000027d794
- (id)allObjects;	// IMP=0x000000000027d67f
- (id)objectAtIndex:(long long)arg1;	// IMP=0x000000000027d5c9
- (void)dealloc;	// IMP=0x000000000027d583

@end
